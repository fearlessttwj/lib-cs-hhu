int delete(PBinSearchTree ptree,KeyTree key){
    PBinSearchNode parentp,p,r;
    p = *ptree;
    parent = NULL;
    while(p!=NULL){
        if(p->key == key) break;
        parentp = p;
        if(p->key > key) p = p->llink;
        else p = p->rlink;
    }
    if(p==NULL) return 0;
    if(p->llink == NULL){
        if(parentp == NULL) *ptree = p-<rlink;
        else if(parentp->llink == p) parentp->llink = p->rlink;
        else parentp->rlink = p->rlink;
    }
    else{
        r = p->llink;
        while(r->rlink!=NULL) r = r->rlink;
        r->rlink = p->rlink;
        if(parentp == NULL) *ptree = p->llink;
        else if(parentp->llink == p) parentp->llink = p->llink;
        else parentp->rlink = p->llink;
    }
}