#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Economy_ST_ChestRewards {
#pragma pack(push, 1)
struct ST_ChestRewards {
    private: char pad_0[0x28]; public:
    void* get_LevelName_15_F3C948C7433E3ED5DCD2ABB0D7CCC880();
    void* get_LocationDescription_17_F93C3B7E40366DA8B5F969BC51B00DE8();
    void* get_ChestRewardType_11_4D4DD8A24D185A236873E2A15E6FD703();
    void* get_DroidUnlock_20_1E9DBB4347430BA7D8AD9484E736E50B();
    void* get_CosmeticUnlock_23_2091A4C74F4534C0450728894A948C39();
    bool get_isHackChest_26_2724836547D8907CA2712D830EE3EF7D();
    void set_isHackChest_26_2724836547D8907CA2712D830EE3EF7D(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
