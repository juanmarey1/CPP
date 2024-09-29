#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
    public:

        Sample();
        ~Sample();

        int     public_num;
        void    public_function(void) const;
        void    ft_private_function(void);

    private:

        int     _private_num;
        void    _private_function(void) const;

};

#endif