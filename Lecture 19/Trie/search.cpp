bool search(struct TrieNode *root, string key) { 
    TrieNode *pCrawl = root; 
  
    for (int i = 0; i < key.length(); i++) { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]) 
            return false; 
  
        pCrawl = pCrawl->children[index]; 
    } 
  
    return (pCrawl != NULL && pCrawl->isEndOfWord); 
}