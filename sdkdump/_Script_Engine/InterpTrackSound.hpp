#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackVectorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackSound : public InterpTrackVectorBase {
    private: char pad_90[0x18]; public:
    void* get_Sounds();
    bool get_bPlayOnReverse();
    void set_bPlayOnReverse(bool value);
    bool get_bContinueSoundOnMatineeEnd();
    void set_bContinueSoundOnMatineeEnd(bool value);
    bool get_bSuppressSubtitles();
    void set_bSuppressSubtitles(bool value);
    bool get_bTreatAsDialogue();
    void set_bTreatAsDialogue(bool value);
    bool get_bAttach();
    void set_bAttach(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
