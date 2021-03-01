/*INPUT messege order hackerrank (ends input with ctrl+z and enter)
Alex
Hello Monique!
What'up?
Not much :(
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
        string str;
        int instance_index;  // To check instance_index used while comparingin < operator function
    public: 
        static int index; //used to initialize the particular line, a index while create_message in message factory
        Message() {}
        Message(string s){
            str = s;
        }
        //Set index for a particular line message received fom create_message
        void set_index(int i){
            instance_index = i;
        }
        // it will send instance_index to < operator overloading function to compare
        const int get_index(){
            return instance_index;
        }
        const string& get_text() {
            return str;
        }
        bool operator < (Message msg){
            bool check = this->instance_index < msg.get_index();
            return check;
        }
};
int Message::index;

class MessageFactory {
    public:
        MessageFactory() {}
        Message create_message(const string& text) {
            Message obj(text);
            obj.set_index(Message::index++); // set index and increament for another one
            return obj;
        }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}