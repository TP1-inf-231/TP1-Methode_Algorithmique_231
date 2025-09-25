# DEVOIR DDE METHODE ALGORITHMIQUE INF 231

# Projet C – Opérations sur tableaux et matrices

##  Description
Ce projet en langage **C** regroupe plusieurs petits programmes indépendants qui effectuent des opérations sur des **matrices**, des **tableaux** et des **vecteurs**.  

Les fonctionnalités implémentées sont :  

1. **Somme de deux matrices** de dimension `4 x 5`.  
2. **Multiplication de deux matrices** de dimension `2 x 3` et `2 x 3`, produisant une matrice `2 x 3`.  
3. **Recherche séquentielle** dans un tableau.  
4. **Multiplication de deux entiers positifs** `a x b`, en utilisant exclusivement l’opérateur `+1`.  
5. **Vérification si un tableau est trié** (ordre croissant).  
6. **Calcul du médian** dans un tableau.  
7. **Inversion d’un tableau** (renversement de l’ordre des éléments).  
8. **Produit vectoriel** de deux vecteurs de dimension 3.  
9. **Produit vecteur × matrice** (vecteur ligne * matrice carrée).  

---

##  Organisation des fichiers
Chaque fonctionnalité est écrite dans un fichier séparé :  

- `som_matrice.c` → Somme de deux matrices.  
- `multiplication_matrices.c` → Multiplication de deux matrices.  
- `recherche.c` → Recherche séquentielle.  
- `multiplication_a*b.c` → Multiplication par additions successives.  
- `test_trie.c` → Vérification si un tableau est trié.  
- `mediane.c` → Calcul du médian.  
- `inversion_tableau.c` → Inversion d’un tableau.  
- `produit_vectoriel.c` → Produit vectoriel.  
- `produit_vecteur_matrice.c` → Produit vecteur × matrice.  

---

##  Compilation et exécution
Chaque fichier doit être compilé séparément.  
Par exemple :  

```bash
gcc som_matrice.c -o som_matrice
./som_matrice
```

##   Auteur:
Organiation TP1-INF-231

Projet réalisé dans le cadre du cours [Methode ALgorithmique 231].Auteur



