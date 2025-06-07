#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceBurnIn : public _Script_UMG::UserWidget {
    private: char pad_208[0x90]; public:
    void* get_FrameInformation();
    _Script_LevelSequence::LevelSequenceActor*& get_LevelSequenceActor();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_CoreUObject::Object* InSettings);
    void* GetSettingsClass();
}; // Size: 0x298
#pragma pack(pop)
}
