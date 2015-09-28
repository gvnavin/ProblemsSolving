package com.testcode;

public class ObjectReferenceTest {

    public static void main(String[] args) {
        TestClass obj1 = new TestClass();
        obj1.a = 5;
        Holder c = new Holder(obj1);
        obj1.a = 6;
        c.print(); //5  //6
        System.out.print(obj1.a); //6  //6
    }

    public interface ITest {
        public int get();
    }

    static class TestBaseClass {
        public Object get() {
            return null;
        }
    }

    static class TestSubClass extends TestBaseClass {

        private void set() {

        }

        public String get() {
            set();
            return "";
        }
    }

    static class Holder {
        TestClass obj2;
        public Holder(TestClass obj) {
            obj2 = obj;
        }

        public void print() {
            System.out.print(obj2.a);
            obj2.a = 7;
        }
    }

    static class TestClass {
        public int a;
    }
}
