#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsRopeAttachmentComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSetRopeAttachmentParams {
    private: char pad_0[0x28]; public:
    _Script_RsGameTechRT::RsRopeAttachmentComponent*& get_RopeAttachment();
    void* get_AttachmentPointLocal();
    bool get_bApplyRotationalConstraint();
    void set_bApplyRotationalConstraint(bool value);
    void* get_SwingAxis();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
