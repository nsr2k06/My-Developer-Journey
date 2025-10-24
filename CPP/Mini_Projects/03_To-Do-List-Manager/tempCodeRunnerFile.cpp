
void addTask(vector<Task>& tasks) {
    cin.ignore();
    string desc;
    cout << "Enter task description: ";
    getline(cin, desc);
    tasks.push_back({desc, false});