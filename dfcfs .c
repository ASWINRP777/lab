#include <stdio.h>
#include <stdlib.h>

void FCFS(int requests[], int n, int head)
{
    int total_distance = 0;
    int current_position = head;

    printf("Sequence of servicing the requests:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", requests[i]);
        total_distance += abs(requests[i] - current_position);
        current_position = requests[i];
    }
    printf("\nTotal head movement = %d\n", total_distance);
}

int main()
{
    int n, head;

    printf("Enter the number of disk requests: ");
    scanf("%d", &n);

    int requests[n];
    printf("Enter the disk requests sequence:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &requests[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    FCFS(requests, n, head);

    return 0;
}
