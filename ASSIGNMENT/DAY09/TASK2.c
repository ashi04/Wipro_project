/* Data Structures in C

Task: Plugin Management Data Structures

Design and implement data structures for managing loaded plugins.

Ensure efficient storage and retrieval of function pointers for file
operations provided by plugins.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
    char name[50];
    void (*fileOperation)(void);  
} 
PluginInfo;

typedef struct 
{
    PluginInfo* plugins;
    size_t size;
    size_t capacity;
} PluginManager;


void initializePluginManager(PluginManager* manager);
void addPlugin(PluginManager* manager, const char* name, void (*fileOperation)(void));
void removePlugin(PluginManager* manager, const char* name);
void executeFileOperation(PluginManager* manager, const char* name);

int main() 
{
    PluginManager manager;
    initializePluginManager(&manager);

   
    addPlugin(&manager, "Plugin1", &fileOperation1);
    addPlugin(&manager, "Plugin2", &fileOperation2);

    
    executeFileOperation(&manager, "Plugin1");

   
    removePlugin(&manager, "Plugin2");

    return 0;
}

void initializePluginManager(PluginManager* manager) 
{
    manager->plugins = NULL;
    manager->size = 0;
     manager->capacity = 0;
}

void addPlugin(PluginManager* manager, const char* name, void (*fileOperation)(void))
{
    if (manager->size >= manager->capacity) 
    {
       
        manager->capacity += 10;
        manager->plugins = realloc(manager->plugins, manager->capacity * sizeof(PluginInfo));
    }

    PluginInfo* plugin = &manager->plugins[manager->size];
    strcpy(plugin->name, name);
    plugin->fileOperation = fileOperation;
    manager->size++;
}

void removePlugin(PluginManager* manager, const char* name) 
{
    for (size_t i = 0; i < manager->size; i++) 
    {
        if (strcmp(manager->plugins[i].name, name) == 0)
        {
           
            for (size_t j = i; j < manager->size - 1; j++)
            {
                manager->plugins[j] = manager->plugins[j + 1];
            }
            manager->size--;
            break;
        }
    }
    void executeFileOperation(PluginManager* manager, const char* name)
    {
    for (size_t i = 0; i < manager->size; i++)
    {
        if (strcmp(manager->plugins[i].name, name) == 0)
        {
            manager->plugins[i].fileOperation();
            break;
        }
    }
}


void fileOperation1(void) 
{
    printf("Executing file operation 1...\n");
}

void fileOperation2(void)
{
    printf("Executing file operation 2...\n");
}
}
