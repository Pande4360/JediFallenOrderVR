#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIFightStyle {
    private: char pad_0[0x4]; public:
    bool get_bFallbackAfterActive();
    void set_bFallbackAfterActive(bool value);
    bool get_bMaintainMinPassiveDistance();
    void set_bMaintainMinPassiveDistance(bool value);
    bool get_bAlignToActiveSector();
    void set_bAlignToActiveSector(bool value);
    bool get_bCanStrafe();
    void set_bCanStrafe(bool value);
    bool get_bCanMoveBackwards();
    void set_bCanMoveBackwards(bool value);
    bool get_bCanHaveFightTokenStolen();
    void set_bCanHaveFightTokenStolen(bool value);
    bool get_bCancelActiveBehaviorIgnoringDistanceIfTargetInSync();
    void set_bCancelActiveBehaviorIgnoringDistanceIfTargetInSync(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
