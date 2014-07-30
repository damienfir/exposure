class FilterModule
{
public:
    FilterModule ();
    virtual ~FilterModule ();

    virtual void set_image();
    virtual void process();
    virtual void get_image();

private:
    /* data */
};
