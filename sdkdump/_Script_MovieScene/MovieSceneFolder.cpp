#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneFolder.hpp"
void* _Script_MovieScene::MovieSceneFolder::get_ChildObjectBindingStrings() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MovieScene::MovieSceneFolder::get_FolderName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_MovieScene::MovieSceneFolder::get_ChildFolders() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_MovieScene::MovieSceneFolder::get_ChildMasterTracks() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneFolder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneFolder");
    return result;
}
