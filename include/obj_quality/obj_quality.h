#include <string>

struct ObjectQuality
{
    double obj_distlong_rms;
    double obj_distlat_rms;
    double obj_vrellong_rms;
    double obj_vrellat_rms;
    double obj_arellong_rms;
    double obj_arellat_rms;
    double obj_orientation_rms;
    double obj_probofexist;
    std::string obj_measstate;
};
