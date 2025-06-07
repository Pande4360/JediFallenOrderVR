#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EdGraphNode.hpp"
#include "EdGraphSchemaAction.hpp"
#include "EdGraphSchemaAction_NewNode.hpp"
_Script_Engine::EdGraphNode*& _Script_Engine::EdGraphSchemaAction_NewNode::get_NodeTemplate() {
    return *(_Script_Engine::EdGraphNode**)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Engine::EdGraphSchemaAction_NewNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EdGraphSchemaAction_NewNode");
    return result;
}
