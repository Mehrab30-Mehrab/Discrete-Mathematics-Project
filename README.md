# 🚀 Graph Degree Computation Using Adjacency Matrix  

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:00C9FF,100:92FE9D&height=200&section=header&text=Directed%20Graph%20Degree%20Analysis&fontSize=35&fontColor=ffffff&animation=fadeIn" />
</p>

---

## 📘 Course Information  

🎓 Course Code: CSE106 - Discrete Mathematics  

👨‍🏫 Faculty Name: Sadia Nur Amin  

📌 Project Title: Degree Computation in a Directed Graph Using Adjacency Matrix  

---

## 🧠 Project Overview  

This project implements a Directed Graph using an Adjacency Matrix in C.  
The program randomly generates graph edges and calculates:

🔹 Total In-Degree  
🔹 Total Out-Degree  
🔹 Execution Time for Degree Computation  

It also verifies the fundamental property of directed graphs:

✅ Sum of In-Degree = Sum of Out-Degree  

---

## ⚙️ Features  

✨ Random graph generation  
✨ Supports up to 5000 vertices  
✨ Efficient degree computation  
✨ Execution time measurement using clock()  
✨ Input validation  
✨ Demonstrates O(n²) time complexity  

---

## 🏗️ Concepts Practiced  

📌 Adjacency Matrix Representation  
📌 Directed Graph Theory  
📌 In-Degree & Out-Degree Calculation  
📌 Time Complexity Analysis (O(n²))  
📌 Random Number Generation  
📌 Performance Measurement in C  

---

## 🖥️ Program Workflow  

1️⃣ User inputs the number of vertices  
2️⃣ Program generates a random adjacency matrix  
3️⃣ Matrix is scanned to compute total in-degree and out-degree  
4️⃣ Execution time is measured  
5️⃣ Program verifies if both sums are equal  

---

## 📊 Time Complexity  

Since nested loops are used:

Time Complexity = O(n²)  

If n = 5000 → 25,000,000 iterations  

---

## 💾 Memory Usage  

Adjacency Matrix Size:

5000 × 5000 integers  

Approximate memory usage ≈ 100 MB  

(Global declaration is used to prevent stack overflow.)

---

## ▶️ How to Run  

### 🔹 Using GCC  

gcc graph_degree.c -o graph_degree  
./graph_degree  

### 🔹 Using CodeBlocks  

1. Create a new C project  
2. Paste the source code  
3. Build and Run  

---

## 📌 Sample Output  

Enter number of vertices : 3  
Sum of In-degree is = 6  
Sum of Out-degree is = 6  
Sum of in-degree and sum of out-degree are same  
Degree computation time: 0.002 ms  

---

## 🎯 Learning Outcomes  

✔ Clear understanding of graph data structures  
✔ Practical implementation of directed graphs  
✔ Knowledge of algorithm efficiency  
✔ Experience with execution time measurement  

---

## 👨‍💻 Author  

MEHRAB MORSHED MARJAN  
BSc in Computer Science & Engineering  
East West University  

---

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:92FE9D,100:00C9FF&height=120&section=footer"/>
</p>

---

⭐ If you found this project helpful, consider giving it a star!

