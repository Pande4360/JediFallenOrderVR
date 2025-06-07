#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsRopeComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAttachToRopeParams {
    private: char pad_0[0x30]; public:
    _Script_RsGameTechRT::RsRopeComponent*& get_Rope();
    void* get_AttachmentPointLocal();
    void* get_AttachmentBone();
    void* get_SwingDirection();
    bool get_bApplyRotationalConstraint();
    void set_bApplyRotationalConstraint(bool value);
    bool get_bForceRopeUnattach();
    void set_bForceRopeUnattach(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
