#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void displayList()
{
    if (head == NULL)
    {
        cout << "Linked List is empty.\n";
        return;
    }
    Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int binarySearch(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{
    int choice, n = 0, arr[100];

    do
    {
        cout << "\n=== MENU ===\n";
        cout << "1. Insert into Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Input Array\n";
        cout << "4. Sort Array (Merge Sort)\n";
        cout << "5. Sort Array (Quick Sort)\n";
        cout << "6. Display Array\n";
        cout << "7. Binary Search in Array\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int val;
            cout << "Enter value: ";
            cin >> val;
            insertNode(val);
            break;
        }
        case 2:
            displayList();
            break;
        case 3:
        {
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            break;
        }
        case 4:
            if (n > 0)
            {
                mergeSort(arr, 0, n - 1);
                cout << "Array sorted using Merge Sort.\n";
            }
            else
                cout << "Array is empty!\n";
            break;
        case 5:
            if (n > 0)
            {
                quickSort(arr, 0, n - 1);
                cout << "Array sorted using Quick Sort.\n";
            }
            else
                cout << "Array is empty!\n";
            break;
        case 6:
            if (n > 0)
            {
                cout << "Array: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << "\n";
            }
            else
                cout << "Array is empty!\n";
            break;
        case 7:
        {
            if (n > 0)
            {
                int x;
                cout << "Enter value to search: ";
                cin >> x;
                int result = binarySearch(arr, n, x);
                if (result != -1)
                    cout << "Found at index " << result << "\n";
                else
                    cout << "Not found.\n";
            }
            else
                cout << "Array is empty!\n";
            break;
        }
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
