#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a < b) {
        if (c < d) {
            if (b < d) {
                if (d < e) {
                    if (b < c) {
                        printf("%d", c);
                    }
                    else {
                        printf("%d", b);
                    }
                }
                else {
                    if (c < e) {
                        if (b < e) {
                            if (b < c) {
                                printf("%d", c);
                            }
                        else {
                            printf("%d", b);
                            }
                        }
                    }
                }
            }
            else {
                if (c < e) {
                    if (b < e) {
                        if (b < c) {
                            printf("%d", c);
                        }
                        else {
                            printf("%d", b);
                        }
                    }
                    else {
                        if (a < e) {
                            printf("%d", e);
                        }
                        else {
                            printf("%d", a);
                        }
                    }
                }
                else {
                    if (a < d) {
                        if (a < c) {
                            printf("%d", c);
                        }
                        else {
                            printf("%d", a);
                        }
                    }
                    else {
                        printf("%d", d);
                    }
                }
            }
        else {
            if (b < c) {
                if (b < d) {
                        printf("%d", d);                    
                }
                else {
                        printf("%d", b);     
                }
            }
            else {
                if (a < c) {
                        printf("%d", c);   
                }
                else {
                        printf("%d", a);   
                }
            }
        }
    else {
        if (c < d) {
            if (b < d) {
                if (d < e) {
                    if (b < c) {
                        printf("%d", c);   
                    }
                    else {
                        printf("%d", b);  
                    }
                }
                else {
                    if (c < e) {
                        if (b < e) {
                            if (b < c) {
                                printf("%d", c);
                            }
                            else {
                                printf("%d", b);
                            }
                        }
                        else {
                            if 
                        }
                    }
                }
            }
        }
    }