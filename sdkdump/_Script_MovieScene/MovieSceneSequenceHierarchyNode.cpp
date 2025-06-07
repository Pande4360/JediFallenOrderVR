#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequenceHierarchyNode.hpp"
void* _Script_MovieScene::MovieSceneSequenceHierarchyNode::get_ParentID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSequenceHierarchyNode::get_Children() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequenceHierarchyNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequenceHierarchyNode");
    return result;
}
