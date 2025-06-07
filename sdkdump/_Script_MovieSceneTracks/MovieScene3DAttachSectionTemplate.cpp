#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieScene3DAttachSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_DetachmentRotationRule() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_DetachmentLocationRule() {
    return (void*)((uintptr_t)this + 0x4b);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_AttachSocketName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_AttachBindingID() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_AttachComponentName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_AttachmentLocationRule() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_AttachmentRotationRule() {
    return (void*)((uintptr_t)this + 0x49);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_AttachmentScaleRule() {
    return (void*)((uintptr_t)this + 0x4a);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::get_DetachmentScaleRule() {
    return (void*)((uintptr_t)this + 0x4d);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DAttachSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieScene3DAttachSectionTemplate");
    return result;
}
