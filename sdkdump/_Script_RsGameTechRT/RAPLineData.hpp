#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RAPLineData {
    private: char pad_0[0xa8]; public:
    void* get_CharacterType();
    void* get_WwiseEventName();
    void* get_Description();
    void* get_Text();
    void* get_Choice();
    void* get_ChoicePrompt();
    void* get_UID();
    bool get_bIsRadio();
    void set_bIsRadio(bool value);
    bool get_bCritPath();
    void set_bCritPath(bool value);
    bool get_bNotSpatialized();
    void set_bNotSpatialized(bool value);
    void* get_FacialAnim();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
