#include <iostream>
#include <mysql.h>
struct connection_details{
    const char *server, *user, *password, *database;
};

MYSQL* mysql_connection_setup(struct connection_details mysql_details){
    MYSQL *connection = mysql_init(NULL);
    
    if (!mysql_real_connect(connection, mysql_details.server,  mysql_details.user,  mysql_details.password,  mysql_details.database, 0, NULL, 0)) {
        std::cout << "Connection Error: " << mysql_error(connection) << std::endl;
        exit(1);
    }
    return connection;
}

MYSQL_RES* mysql_execute_query(MYSQL *connection, const char *sql_query){
    if (mysql_query (connection, sql_query)) {
        std::cout << "MySQL Query Error: " << mysql_error(connection) << std::endl;
    }
    return mysql_use_result(connection);
}

int main() {
    
    MYSQL *con;
        MYSQL_RES *res;
        MYSQL_ROW row;
        
        struct connection_details mySQLD;
                mySQLD.server = "localhost";
                mySQLD.user = "netsu";
                mySQLD.password = "root";
                mySQLD.database = "mydatabase";
        
                con = mysql_connection_setup(mySQLD);
                res = mysql_execute_query(con, "select * from tblUsers;");
        
        std::cout << "Display database output:\n" << std::endl;
        
        while ((row = mysql_fetch_row(res)) != NULL){
            std::cout << row[0] << "  |  " << row[1] << "  |  " << row[2] << "  |  " << row[3] << "  |  " << row[4] << "   |   " << std::endl;
        }
        
        mysql_free_result(res);
        mysql_close(con);
    
    
    return 0;
}
