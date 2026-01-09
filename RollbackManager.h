#ifndef ROLLBACKMANAGER_H
#define ROLLBACKMANAGER_H

/*
====================================================
Class: RollbackManager
Purpose:
- Stack-based rollback mechanism
====================================================
*/

class RollbackManager {
public:
    int stack[200];
    int top;

    RollbackManager();
    void push(int id);
    int pop();
};

#endif
