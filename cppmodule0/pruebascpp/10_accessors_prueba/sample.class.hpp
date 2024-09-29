#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

    public:

        Sample(void);
        ~Sample(void);

        int     getNum(void) const;
        void    setNum(int n);

    private:

        int num;

};

#endif