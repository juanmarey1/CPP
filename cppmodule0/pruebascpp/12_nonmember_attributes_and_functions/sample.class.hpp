#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

    public:

        Sample();
        ~Sample();

        static int  getNumInst(void);

    private:

        static int  _NumInst;

};

#endif