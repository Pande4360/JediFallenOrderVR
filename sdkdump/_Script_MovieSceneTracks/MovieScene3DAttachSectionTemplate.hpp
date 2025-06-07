#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DAttachSectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    private: char pad_20[0x30]; public:
    void* get_AttachBindingID();
    void* get_AttachSocketName();
    void* get_AttachComponentName();
    void* get_AttachmentLocationRule();
    void* get_AttachmentRotationRule();
    void* get_AttachmentScaleRule();
    void* get_DetachmentLocationRule();
    void* get_DetachmentRotationRule();
    void* get_DetachmentScaleRule();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
