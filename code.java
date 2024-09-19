// import java.util.*;

// class Student
// {
//     String name;
//     int roll;
//     int marks;

// }


// public class code {
//     public static void main(String[] args) {
//         // int nums[] = new int[4];
//         // nums[0] = 1;
//         // nums[1] = 2;
//         // nums[2] = 3;
//         // nums[3] = 4;

//         // for(int i=0;i<7;i++)
//         // {
//         //     System.out.println(nums[i]);
//         // }

//         Student s1 = new Student();
//         s1.name = "Rahul";
//         s1.roll = 1;
//         s1.marks = 90;

//         Student s2 = new Student();
//         s2.name = "Rohit";
//         s2.roll = 2;
//         s2.marks = 80;

//         Student s3 = new Student();
//         s3.name = "Raj";
//         s3.roll = 3;
//         s3.marks = 70;

// System.out.println(s1.name);
//         Student students[] = new Student[3];
//         students[0] = s1;
//         students[1] = s2;
//         students[2] = s3;

//         for(int i=0;i<students.length;i++)
//         {
//             System.out.println("Name: "+ students[i].name+ " , " + "Roll No: " + students[i].roll + " , " + "Marks: " + students[i].marks);
//         }
//     }
// }


// import java.util.StringBuffer;

public class code
{
    public static void main(String[] args) {
        StringBuffer sb = new StringBuffer("harry");
        sb.append("John");

        sb.insert(0,"Java");
        System.out.println(sb.capacity());
        System.out.println(sb.length());

    }
}