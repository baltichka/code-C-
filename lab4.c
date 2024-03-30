#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int m, n;
char **image;

void input(int i)
{
    FILE *file = fopen("image.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    
    fscanf(file, "%d %d", &m, &n);
    
    image = (char **)malloc(m * sizeof(char *));
    for (int j = 0; j < m; j++)
    {
        image[j] = (char *)malloc(n * sizeof(char));
        fscanf(file, "%s", image[j]);
    }
    
    fclose(file);
}

void output(int i)
{
    for (int j = 0; j < m; j++)
    {
        printf("%s\n", image[j]);
    }
}

void save(int i, char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    
    fprintf(file, "%d %d\n", m, n);
    
    for (int j = 0; j < m; j++)
    {
        fprintf(file, "%s\n", image[j]);
    }
    
    fclose(file);
}

int main()
{
    char option[20];
    int i;
    char filename[20];
    
    printf("Welcome to the Image Manipulator!\n");
    printf("Choose an option:\n");
    while (1)
    {
        printf("1. Load image\n");
        printf("2. Output image\n");
        printf("3. Save image\n");
        printf("4. Exit\n");
        
        scanf("%s", option);
        
        if (strcmp(option, "1") == 0)
        {
            input(0);
        }
        else if (strcmp(option, "2") == 0)
        {
            output(0);
        }
        else if (strcmp(option, "3") == 0)
        {
            printf("Enter filename to save: ");
            scanf("%s", filename);
            save(0, filename);
            printf("Image saved to %s\n", filename);
        }
        else if (strcmp(option, "4") == 0)
        {
            for (int j = 0; j < m; j++)
            {
                free(image[j]);
            }
            free(image);
            printf("Goodbye!\n");
            break;
        }
        else
        {
            printf("Invalid option!\n");
        }
    }
    
    return 0;
}