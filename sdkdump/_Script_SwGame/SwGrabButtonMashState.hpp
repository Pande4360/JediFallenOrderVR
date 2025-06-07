#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwGrabWhiffAttackState.hpp"
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGrabButtonMashState : public SwGrabWhiffAttackState {
    private: char pad_2a8[0x118]; public:
    void* get_ButtonMashConfig();
    bool get_bButtonMashActive();
    void set_bButtonMashActive(bool value);
    _Script_RsGameTechRT::RsSyncDefinition*& get_SuccessSync();
    void* get_SuccessBlendSpaceInputType();
    _Script_RsGameTechRT::RsSyncDefinition*& get_FailSync();
    void* get_FailBlendSpaceInputType();
    bool get_bDealDamageOnFail();
    void set_bDealDamageOnFail(bool value);
    void* get_HitEvent();
    static _Script_CoreUObject::Class* static_class();
    void StartButtonMash();
    void OnButtonMashSuccess();
    void OnButtonMashFailure();
    void OnButtonMashEnd();
    void FailButtonMash();
    void ButtonMashSuccess();
    void ButtonMashCleanup();
}; // Size: 0x3c0
#pragma pack(pop)
}
