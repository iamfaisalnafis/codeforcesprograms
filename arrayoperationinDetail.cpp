#include <iostream>

using namespace std;

class arrayOp
{
private:
    int *arr;
    int size;
    int length;
    void swap (int *x, int *y);
public:
    arrayOp()
    {
        size = 10;
        length = 0;
        arr = new int[size];
    }
    arrayOp (int sz)
    {
        size = sz;
        length = 0;
        arr = new int[size];
    }
    ~arrayOp()
    {
        delete []arr;
    }

    void display();
    void appendElement(int number);
    void insertElement(int index, int number);
    int deleteElement(int index);
    int linearSearching(int key);
    int binarySearching(int key);
    int getElement(int index);
    void setElement(int index, int number);
    int maxElement();
    int minElement();
    int sumofElements();
    float averageofElements();
    void reverseElements();
    void reverseElements2();
    void insertSort(int number);
    int isarraySorted();
    void rearrangeElements();
    arrayOp* mergeElements(arrayOp arr2);
    arrayOp* unionofElemets(arrayOp arr2);
    arrayOp* diffofElements(arrayOp arr2);
    arrayOp* interofElements(arrayOp arr2);
};    

void arrayOp::display ()
{
    int i;
    cout << "Elements are: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

void arrayOp::appendElement (int number)
{
    if (length < size)
    {
        arr[length++] = number;
    }
}

void arrayOp::insertElement (int index, int number)
{
    int i;
    if (index >= 0 && index <= length)
    {
        for (i = length; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = number;
        length++;
    }
}

int arrayOp::deleteElement (int index)
{
    int x = 0, i;
    if (index >= 0 && index < length)
    {
        x = arr[index];
        for (i = index; i < length; i++)
        {
            arr[i] = arr[i + 1];
        }
        length--;
        return x;
    }
    return 0;
}

void arrayOp::swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int arrayOp::linearSearching (int key)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (key == arr[i])
        {
            swap(&arr[i], &arr[0]);
            return i;
        }
    }
    return -1;
}

int arrayOp::binarySearching (int key)
{
    int low(0), high(length - 1), mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1; 
        }
        else
        {
            low = mid + 1;
        }
    }
    return - 1;
}

int arrayOp::getElement (int index)
{
    if (index >= 0 && index < length)
    {
        return arr[index];
    }
    return -1;
}

void arrayOp::setElement (int index, int number)
{
    if (index >= 0 && index < length)
    {
        arr[index] = number;
    }
}

int arrayOp::maxElement ()
{
    int max = arr[0];
    int i;
    for (i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int arrayOp::minElement ()
{
    int min = arr[0];
    int i;
    for (i = 1; i < length; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int arrayOp::sumofElements ()
{
    int total(0), i;
    for (i = 0; i < length; i++)
    {
        total += arr[i];
    }
    return total;
}

float arrayOp::averageofElements ()
{
    return (float)sumofElements() / length;
}

void arrayOp::reverseElements ()
{
    int *tempArray;
    int i, j;
    tempArray = (int *)malloc(length * sizeof(int));
    for (i = length - 1, j = 0; i >= 0; i--, j++)
    {
        tempArray[j] = arr[i];
    }
    for (i = 0; i < length; i++)
    {
        arr[i] = tempArray[i];
    }
}

void arrayOp::reverseElements2 ()
{
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        swap (&arr[i], &arr[j]);
    }
}

void arrayOp::insertSort (int number)
{
    int i = length - 1;
    if (length == size)
    {
        return;
    }
    while (i >= 0 && arr[i] > number)
    {
        arr[i + 1] = number;
        length++;
    }
}

int arrayOp::isarraySorted ()
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void arrayOp::rearrangeElements ()
{
    int i(0), j(length - 1);
    while (i < j)
    {
        while (arr[i] < 0)
        {
            i++;
        }
        while (arr[i] > 0)
        {
            j--;
        }
        if (i < j)
        {
            swap (&arr[i], &arr[j]);
        } 
    }
}

arrayOp* arrayOp::mergeElements (arrayOp arr2)
{
    int i(0), j(0), k(0);
    arrayOp *arr3 = new arrayOp(length + arr2.length);
    while (i < length && j < arr2.length)
    {
        if (arr[i] < arr2.arr[j])
        {
            arr3->arr[k++] = arr[i++];
        }
        else
        {
            arr3->arr[k++] = arr2.arr[j++];
        }
    }
    for (; i < length; i++)
    {
        arr3->arr[k++] = arr[i];
    }
    for (; j < arr2.length; j++)
    {
        arr3->arr[k++] = arr2.arr[j];
    }
    arr3->length = length + arr2.length;
    return arr3; 
}

arrayOp* arrayOp::unionofElemets (arrayOp arr2)
{
    int i(0), j(0), k(0);
    arrayOp *arr3 = new arrayOp(length + arr2.length);
    while (i < length && j < arr2.length)
    {
        if (arr[i] < arr2.arr[j])
        {
            arr3->arr[k++] = arr[i++];
        }
        else if (arr2.arr[j] < arr[i])
        {
            arr3->arr[k++] = arr2.arr[j++];
        }
        else
        {
            arr3->arr[k++] = arr[i++];
            j++;
        }
    }
    for (; i < length; i++)
    {
        arr3->arr[k++] = arr[i];
    }
    for (; j < arr2.length; j++)
    {
        arr3->arr[k++] = arr2.arr[j];
    }
    arr3->length = k;
    return arr3; 
}

arrayOp* arrayOp::interofElements (arrayOp arr2)
{
    int i(0), j(0), k(0);
    arrayOp *arr3 = new arrayOp(length + arr2.length);
    while (i < length && j < arr2.length)
    {
        if (arr[i] < arr2.arr[j])
        {
            i++;
        }
        else if (arr2.arr[j] < arr[i])
        {
            j++;
        }
        else if(arr[i] == arr2.arr[j])
        {
            arr3->arr[k++] = arr[i++];
            j++;
        }
    }
    arr3->length = k;
    return arr3; 
}

arrayOp* arrayOp::diffofElements (arrayOp arr2)
{
    int i(0), j(0), k(0);
    arrayOp *arr3 = new arrayOp(length + arr2.length);
    while (i < length && j < arr2.length)
    {
        if (arr[i] < arr2.arr[j])
        {
            arr3->arr[k++] = arr[i++];
        }
        else if (arr2.arr[j] < arr[i])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    for (;i < length; i++)
    {
        arr3->arr[k++] = arr[i];
    }
    arr3->length = k;
    return arr3; 
}

int main()
{
    arrayOp *arr1;
    int ch, sz;
    int number, index;

    cout << "Enter the Size of Array: ";
    scanf("%d", &sz);
    arr1 = new arrayOp(sz);

    do
    {
        cout << "\n\nMenu\n";
        cout << "1.  Insert an Element in an Array\n";
        cout << "2.  Append an Element to the end of an Array\n";
        cout << "3.  Delete an ELement in an Array\n";
        cout << "4.  Search for an Element in an Array\n";
        cout << "5.  Sum of all the Elements in the Array\n";
        cout << "6.  Display all the Elements in an Array\n";
        cout << "7.  Linear Searching of an Element in an Array\n";
        cout << "8.  Binary Searching of an Element in an Array\n";
        cout << "9.  Reversing the Elements of an Array\n";
        cout << "10. Reversing the Elements of an Array (2nd Method)\n";
        cout << "11. Merging the Elements of Two Different Arrays\n";
        cout << "12. Intersection of Two Arrays\n";
        cout << "13. Union of Two Arrays\n";
        cout << "14. Difference of Two Arrays\n";
        cout << "15. Find the Maximun Element in the Array\n";
        cout << "16. Find the Minimum Element in the Array\n";
        cout << "17. Get an Element of an Array using Index\n";
        cout << "18. Inserting Element in a Specific Position\n";
        cout << "19. Rearrange the Negetive and Positive Elements of an Array\n";
        cout << "20. Insert Element in a Sorted Array\n";

        cout << "Enter your Choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1: 
                cout << "Enter an Element and an Index value: ";
                cin >> number >> index;
                arr1->insertElement(index, number);
                break;
            case 2:
                cout << "Enter the Element to apppend: ";
                cin >> number;
                arr1->appendElement(number);
                break;
            case 3:
                cout << "Enter the Index value from which the Element needs to be deleted: ";
                cin >> index;
                number = arr1->deleteElement(index);
                cout << "Deleted Element is: " << number;
                break;
            case 4:
                cout << "Enter the Element you want to search: ";
                int key;
                cin >> key;
                arr1->linearSearching(key);
                break;
            case 5:
                cout << "Sum of all the Elements inside the array: ";
                cout << arr1->sumofElements();
                break;
            case 6:
                cout << "Displaying all the Elements of an Array: ";
                arr1->display();
                break;
            case 7:
                cout << "Linear Searching of an Element in an Array, Enter the Element: ";
                cin >> number;
                index = arr1->linearSearching(number);
                cout << "Element found at Index: " << index;
                break;
            case 8:
                cout << "Binary Searching of an Element in an Array, Enter the Element: ";
                cin >> number;
                index = arr1->binarySearching(number);
                cout << "Element found at Index: " << index;
                break;
            case 9:
                cout << "Reversing Elements in an Array: ";
                arr1->reverseElements();
                break;
            case 10:
                cout << "Reversing Elements of an Array(2nd Method): ";
                arr1->reverseElements2();
                break;
        }
    }
    while (ch < 11);
    return 0;
}
