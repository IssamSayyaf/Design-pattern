#include <iostream>
#include <string>

class Logger {
public:
    // The only public way to get the single Logger instance.
    static Logger& get() {
        static Logger one;
        return one;
    }

    // Use the shared instance to write a log message.
    void log(const std::string& msg) {
        std::cout << "[LOG] " << msg << "\n";
    }

private:
    // Private constructor means you cannot create Logger with `Logger x;`.
    // There is no public default constructor, so construction is controlled here.
    Logger() {}
};

int main() {
    Logger::get().log("system started");
    Logger::get().log("sensor ready");
}
