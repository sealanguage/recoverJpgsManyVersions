// code from cs50 lecture
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "students.h"

int main (void)
{
    // allocate space for the students
    int enrollment = get_int("enrollment: ");
    student students[enrollment];

    // prompt for students names and dorms
    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("name: ");
        students[i].dorm = get_string("dorm: ");
    }
    // print students' names and dorms
    for (int i = 0; i < enrollment; i++)
    {
        printf("%s is in %s.\n", students[i].name, students[i].dorm);
    }


}