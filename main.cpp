#include <iostream>
#include <deque>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main() {
    deque<string> requests;

    requests.push_back("Reset Password");
    requests.push_back("Install Printer");
    requests.push_back("Update Software");

    requests.push_back("Replace Mouse");

    requests.push_front("Urgent Network Issue");

    cout << "SERVICE DESK" << endl;
    cout << "Current Requests:" << endl;
    for (const string& req : requests) {
        cout << "  " << req << endl;
    }

    cout << "Removing first request..." << endl;
    requests.pop_front();

    cout << "Remaining Requests:" << endl;
    for (const string& req : requests) {
        cout << "  " << req << endl;
    }
    cout << endl;

    stack<string> completed;

    completed.push("Setup Printer");
    completed.push("Install Monitor");
    completed.push("Update Laptop");

    cout << "COMPLETED REQUESTS" << endl;
    cout << "Most recently completed: " << completed.top() << endl;

    cout << "Removing most recent..." << endl;
    completed.pop();

    cout << "Previous completed request: " << completed.top() << endl;
    cout << endl;

    queue<string> customers;

    customers.push("Amy");
    customers.push("Marcus");
    customers.push("David");

    cout << "CUSTOMER QUEUE" << endl;
    cout << "Next customer: " << customers.front() << endl;

    cout << "Helping " << customers.front() << "..." << endl;
    customers.pop();

    cout << "Next customer: " << customers.front() << endl;

    return 0;
}
