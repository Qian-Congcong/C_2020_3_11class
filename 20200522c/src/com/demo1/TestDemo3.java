package com.demo1;

/**
 * program: 20200522
 * Created with IntelliJ IDEA.
 * Description:
 * User: YouName
 * Date:2020-05-25 22
 * Time:27
 */
class Person {
    public int age;
    public int score;
    public String name;

    public Person(String name,int age,int score) {
        this.name = name;
        this.age = age;
        this.score = score;
    }
    @Override
    public String toString() {
        return '[' +
                "age=" + age +
                ", score=" + score +
                ", name='" + name + '\'' +
                ']';        
    }
}

public class TestDemo3 {

}
