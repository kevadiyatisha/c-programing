#include <stdio.h>
#include <string.h>


typedef enum {ADMIN,EDITOR,VIEWER,GUEST,INVALID} Role;


Role getRoleFromString(const char* roleStr) 
{
    if (strcmp(roleStr, "Admin") == 0) return ADMIN;
    if (strcmp(roleStr, "Editor") == 0) return EDITOR;
    if (strcmp(roleStr, "Viewer") == 0) return VIEWER;
    if (strcmp(roleStr, "Guest") == 0) return GUEST;
    return INVALID;
}

int main() 
{
    char roleStr[20];
    Role role;

    printf("Enter your role (Admin, Editor, Viewer, Guest): ");
    scanf("%s", roleStr);  
    role = getRoleFromString(roleStr);

    switch (role) 
    {
        case ADMIN:
            printf("Access Level: Full access\n");
            break;
        case EDITOR:
            printf("Access Level: Edit access\n");
            break;
        case VIEWER:
            printf("Access Level: Read-only access\n");
            break;
        case GUEST:
            printf("Access Level: No access\n");
            break;
        case INVALID:
            printf("Invalid role entered.\n");
            break;
        default:
            printf("Unexpected error.\n");
            break;
    }

    return 0;
}
