#include "maximumSubarrayProblem/BruteForce.hpp"
#include "maximumSubarrayProblem/DivideAndConquer.hpp"
#include "maximumSubarrayProblem/KadanesAlgorithm.hpp"
#include "searchingAgorithms/BinarySearch.hpp"
#include "searchingAgorithms/LinearSearch.hpp"
#include "sortingAlgorithms/BubbleSort.hpp"
#include "sortingAlgorithms/HeapSort.hpp"
#include "sortingAlgorithms/InsertionSort.hpp"
#include "sortingAlgorithms/MergeSort.hpp"
#include "sortingAlgorithms/QuickSort.hpp"
#include "sortingAlgorithms/SelectionSort.hpp"

int main()
{
    std::vector<int> vec = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    // std::cout << LinearSearch::search(vec, 10) << std::endl;
    // std::cout << BinarySearch::search(vec, 10) << std::endl;
    // InsertionSort::sort(vec);
    // SelectionSort::sort(vec);
    // BubbleSort::sort(vec);
    // MergeSort::sort(vec);
    // QuickSort::sort(vec);
    HeapSort::sort(vec);
    // maximumSubarrayProblem::BruteForce::find(vec);
    // maximumSubarrayProblem::DivideAndConquer::find(vec);
    // maximumSubarrayProblem::KadanesAlgorithm::find(vec);

    return 0;
}