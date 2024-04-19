#include <stdio.h>
#include <stdlib.h>

// å®?ä¹???ºé?´ç??ç»????ä½?
typedef struct {
    int start;
    int end;
} Interval;

// æ¯?è¾???½æ?°ï????¨ä????ºé?´ç?????åº????åº?
int compare(const void *a, const void *b) {
    return ((Interval*)a)->start - ((Interval*)b)->start;
}

// ???å¹¶é??????????ºé??
Interval* mergeIntervals(Interval* intervals, int size, int* returnSize) {
    if (size <= 0) {
        *returnSize = 0;
        return NULL;
    }

    // ?????§èµ·å§???¼å??åº????åº???ºé??
    qsort(intervals, size, sizeof(Interval), compare);

    // ???å»ºç???????ºé?´æ?°ç??
    Interval* mergedIntervals = (Interval*)malloc(size * sizeof(Interval));
    int mergedSize = 0;
    mergedIntervals[0] = intervals[0];

    // ???å¹¶é???????ºé??
    for (int i = 1; i < size; i++) {
        if (intervals[i].start <= mergedIntervals[mergedSize].end) {
            // ??????ï¼???´æ?°å??å¹¶å???????ºé?´ç??ç»???????
            mergedIntervals[mergedSize].end = (intervals[i].end > mergedIntervals[mergedSize].end) ? intervals[i].end : mergedIntervals[mergedSize].end;
        } else {
            // ä¸???????ï¼?å°???°å?ºé?´æ·»?????°ç???????°ç??
            mergedSize++;
            mergedIntervals[mergedSize] = intervals[i];
        }
    }

    *returnSize = mergedSize + 1;
    return mergedIntervals;
}

int main() {
    // ç¤ºä????ºé?´æ?°ç??
    Interval intervals[] = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    int size = sizeof(intervals) / sizeof(intervals[0]);

    int returnSize;
    Interval* mergedIntervals = mergeIntervals(intervals, size, &returnSize);

    // ?????°å??å¹¶å???????ºé??
    for (int i = 0; i < returnSize; i++) {
        printf("[%d, %d] ", mergedIntervals[i].start, mergedIntervals[i].end);
    }

    free(mergedIntervals);
    return 0;
}
