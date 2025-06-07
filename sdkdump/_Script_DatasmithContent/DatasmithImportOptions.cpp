#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DatasmithImportOptions.hpp"
void* _Script_DatasmithContent::DatasmithImportOptions::get_SearchPackagePolicy() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_MaterialConflictPolicy() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_TextureConflictPolicy() {
    return (void*)((uintptr_t)this + 0x2a);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_LightImportPolicy() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_StaticMeshActorImportPolicy() {
    return (void*)((uintptr_t)this + 0x2b);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_CameraImportPolicy() {
    return (void*)((uintptr_t)this + 0x2d);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_OtherActorImportPolicy() {
    return (void*)((uintptr_t)this + 0x2e);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_MaterialQuality() {
    return (void*)((uintptr_t)this + 0x2f);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_BaseOptions() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_TessellationOptions() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_DatasmithContent::DatasmithImportOptions::get_ReimportOptions() {
    return (void*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithImportOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithImportOptions");
    return result;
}
