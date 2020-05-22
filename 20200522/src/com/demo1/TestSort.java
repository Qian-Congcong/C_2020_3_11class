package com.demo1;

import java.util.Arrays;

/**
 * program: 20200522
 * Created with IntelliJ IDEA.
 * Description:
 * User: YouName
 * Date:2020-05-22 19
 * Time:08
 */
public class TestSort {
    /**
     * 时间复杂度： O(n^2)
     * 空间复杂度： O(1)
     * 稳定性： 稳定的排序
     * @param array
     */
    public static void bubbleSort(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length - 1 - i; j++) {
                if (array[j] > array[j+1]) {
                    int tmp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = tmp;
                }
            }
        }
    }

    public static void adjustDown(int[] array, int root, int len) {
        int parent = root;
        int child = 2*parent + 1;
        while (child < len) {
            if(child+1 < len && array[child] < array[child-1]) {

            }
        }
    }

    public static void createHeap(int[] array) {
        for (int i = (array.length-1-1)/2; i >= 0; i++) {
            adjustDown(array,i,array.length);
        }
    }

    /**
     * 时间复杂度： O(nlogn) 不管有序还是无序都是
     * 空间复杂度： O(1)
     * 稳定性： 不稳定
     * @param array
     */
    public static void heapSort(int[] array) {
        createHeap(array);

        int end = array.length - 1;
        while (end > 0) {
            int tmp = array[0];
            array[0] = array[end];
            array[end] = tmp;
            adjustDown(array,0,end);
            end--;
        }
    }

    /**
     * 时间复杂度 ： O(n^2)
     * 空间复杂度 ：O(1)
     * 稳定性：不稳定 排序
     * @param array
     */
    public static void selectSort(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = i+1; j < array.length; j++) {
                if (array[i] > array[j]) {
                    int tmp = array[j];
                    array[j] = array[i];
                    array[i] = tmp;
                }
            }
        }
    }

    public static void shell(int[] array, int gap) {
        int tmp = 0;
        for (int i = gap; i < array.length; i++) {
            tmp = array[i];
            int j;
            for (j = i - gap; j >= 0; j -= gap) {
                if (array[j] > tmp) {
                    array[j + gap] = array[j];
                }else {
                    break;
                }
            }
            array[j + gap] = tmp;
        }
    }

    public static void shellSort(int[] array) {
        int[] drr= {5,3,1};
        for (int i = 0; i < drr.length; i++) {
            shell(array,drr[i]);
        }
    }

    public static void insertSort(int[] array) {
        int tmp = 0;
        for (int i = 1; i < array.length; i++) {
            tmp = array[i];
            int j;
            for (j = i - 1; j >= 0; j--) {
                if (array[j] > tmp) {
                    array[j+1] = array[j];
                }else {
                    break;
                }
            }
            array[j + 1] = tmp;
        }
    }

    public static void main(String[] args) {
        int[] array = {2,68,8,45,67,15,0,7};
        System.out.println(Arrays.toString(array));
        shellSort(array);
        System.out.println(Arrays.toString(array));

    }
}
