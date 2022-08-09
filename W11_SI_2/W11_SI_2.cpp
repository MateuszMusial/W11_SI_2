#include <iostream>

int main()
{
    int arr[10]{ 2,3,5,8,11,9,8,1,4,7 };

    //**************** BUBBLE SORT **************************************************

    //std::cout << "Array before sorting: ";
    //for (int i = 0; i < 10;i++) {
    //    std::cout << arr[i] << " ";
    //}
    //std::cout << std::endl;

    //for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    //    for (int k = 0; k < 9; k++) {
    //        int temp = 0;
    //        if (arr[k + 1] < arr[k]) {
    //            temp = arr[k];
    //            arr[k] = arr[k + 1];
    //            arr[k + 1] = temp;
    //        }
    //    }
    //}
    //std::cout << "Array after sorting: ";
    //for (int i = 0; i < 10;i++) {
    //    std::cout << arr[i] << " ";
    //}
    //std::cout << std::endl;

    // *************************** SELECTION SORT ***********************************************

    //std::cout << "Array before sorting: ";
    //for (int i = 0; i < 10;i++) {
    //    std::cout << arr[i] << " ";
    //}
    //std::cout << std::endl;

    //int index{0};

    //for (int i{ 0 }; i < 10; i++) {
    //    int minVal{ arr[i] };
    //    for (int j{ i }; j < 10; j++) {
    //        if (arr[j] < minVal) {
    //            minVal = arr[j];
    //            index = j;
    //        } 
    //    }
    //    std::swap(arr[i], arr[index]);
    //}

    //std::cout << "Array after sorting: ";
    //for (int i = 0; i < 10;i++) {
    //    std::cout << arr[i] << " ";
    //}
    //std::cout << std::endl;

    // ******************************* INSERTION SORT **********************************************


    //std::cout << "Array before sorting: ";
    //for (int i = 0; i < 10;i++) {
    //    std::cout << arr[i] << " ";
    //}
    //std::cout << std::endl;

    //for (int i{ 1 }; i < 10; i++) {
    //    for (int i{ 1 }; i < 10; i++) {
    //        while (arr[i] < arr[i - 1]) {
    //            std::swap(arr[i], arr[i - 1]);
    //        }
    //    }
    //    
    //}

    //std::cout << "Array after sorting: ";
    //for (int i = 0; i < 10;i++) {
    //    std::cout << arr[i] << " ";
    //}
    //std::cout << std::endl;

    //************************** MERGE SORT ***************************

    std::cout << "Array before sorting: ";
    for (int i = 0; i < 10;i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int arrLeft[5]{};
    int arrRight[5]{};

    for (size_t i{ 0 }; i < 5; i++) {
        arrLeft[i] = arr[i];
    }

    for (size_t i{ 5 }; i < 10; i++) {
        arrRight[i-5] = arr[i];
    }










    std::cout << "Array after sorting: ";
    for (int i = 0; i < 10;i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    //************************ QUICK SORT ********************************

 /*   std::cout << "Array before sorting: ";
    for (int i = 0; i < 10;i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;












    std::cout << "Array after sorting: ";
    for (int i = 0; i < 10;i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;*/


}