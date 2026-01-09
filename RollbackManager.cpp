#include "RollbackManager.h"

RollbackManager::RollbackManager() {
    top = -1;
}

void RollbackManager::push(int id) {
    stack[++top] = id;
}

int RollbackManager::pop() {
    if (top < 0) return -1;
    return stack[top--];
}
