#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneFolder : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    void* get_FolderName();
    void* get_ChildFolders();
    void* get_ChildMasterTracks();
    void* get_ChildObjectBindingStrings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
