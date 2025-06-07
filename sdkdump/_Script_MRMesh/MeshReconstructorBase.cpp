#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MRMeshComponent.hpp"
#include "MeshReconstructorBase.hpp"
_Script_CoreUObject::Class* _Script_MRMesh::MeshReconstructorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MRMesh.MeshReconstructorBase");
    return result;
}
bool _Script_MRMesh::MeshReconstructorBase::IsReconstructionStarted() {
    return;
}
void _Script_MRMesh::MeshReconstructorBase::StopReconstruction() {
    return;
}
void _Script_MRMesh::MeshReconstructorBase::PauseReconstruction() {
    return;
}
void _Script_MRMesh::MeshReconstructorBase::StartReconstruction() {
    return;
}
bool _Script_MRMesh::MeshReconstructorBase::IsReconstructionPaused() {
    return;
}
void _Script_MRMesh::MeshReconstructorBase::DisconnectMRMesh() {
    return;
}
void _Script_MRMesh::MeshReconstructorBase::ConnectMRMesh(_Script_MRMesh::MRMeshComponent* Mesh) {
    return;
}
