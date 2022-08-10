#include <obj_general/obj_general.h>
#include <obj_extended/obj_extended.h>
#include <obj_quality/obj_quality.h>


struct obj_list
{
    int obj_id;
    ObjectGeneral object_general;
    ObjectExtended object_extended;
    ObjectQuality object_quality;

};
