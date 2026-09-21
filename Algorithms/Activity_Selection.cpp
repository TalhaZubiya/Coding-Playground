#include <iostream>
using namespace std;

struct Activity
{
    int start;
    int end;
    char name[10];
};

int main()
{
    int n;

    cout << "Enter number of activities: ";
    cin >> n;

    Activity act[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter activity name: ";
        cin >> act[i].name;

        cout << "Enter start time: ";
        cin >> act[i].start;

        cout << "Enter end time: ";
        cin >> act[i].end;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (act[i].end > act[j].end)
            {
                Activity temp = act[i];
                act[i] = act[j];
                act[j] = temp;
            }
        }
    }

    cout << "Selected Activities: " << endl;

    int last_end = act[0].end;
    int selected = 1;

    cout << act[0].name
         << " Start: " << act[0].start
         << " End: " << act[0].end << endl;

    for (int i = 1; i < n; i++)
    {
        if (act[i].start >= last_end)
        {
            cout << act[i].name
                 << " Start: " << act[i].start
                 << " End: " << act[i].end << endl;

            selected += 1;
            last_end = act[i].end;
        }
    }

    cout << "Selected: " << selected << endl;

    return 0;
}