import java.util.*;

public class Main(){

    public static void main(String args[]){
        
        Hashtable<String, String> table = new Hashtable<>(10, 0.75f);
        //By default the Hashtable has 11 buckets and a load factor (number of elements / number of buckets) of 0.75.
        //We can edit change the number of buckets to 10 and the load factor to 0.75 as show above.
        table.put("100", "Spongebob");
        table.put("123", "Patrick");
        table.put("321", "Sandy");
        table.put("555", "Squidward");
        table.put("777", "Gary");

        table.remove("777");

        for(Strign key: table.keySet()){
            System.out.println(key.hashCode() % 10 + "\t" + key + "\t" + table.get(key));
        }
        
    }
}

// Hashtable = A data structure that stores unique keys to values ex.<Integer, String>
//             Entry = key/value Pair
//             O(1) lookup, insertion, and deletion
//             good for large data sets, too memory intensive for small data sets

// Hashing = key used to compute an integer known as hash
//           hash % (# of buckets) = index of the element in hashtable (which bucket to put element in)

// Bucket = an indexed storage for one or more entries
//          we can store more than one Entery in the case of a collision (in this case the bucket is a linked list)

// collision = two elements when hashed have the same index in the Hashtable
//             less collisions = more efficiency because we will find the element we want directly at that index
//                 rather than having to go to that index and go through the linked list at that index which
//                 means we visit each element in that linked list till we find the element we want.

// Runtime Complexity = Best Case O(1) : No collisions
//                      Worst Case O(n) : 1 massive linkedlist in one bucket, so everything is a collision

        