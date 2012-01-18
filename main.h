#pragma once

#include <wx/wx.h>
#include "gui.h"
#include "CameraDeviceV4L2.h"

class MainApp : public wxApp
{
	public:
		virtual bool OnInit();
};

DECLARE_APP(MainApp)

class MainDialog : public MainDialogBase
{
public:
	MainDialog( wxWindow *parent );
	virtual ~MainDialog();
	
protected:
	virtual void OnCloseDialog( wxCloseEvent& event );
	virtual void OnOKClick( wxCommandEvent& event );
	virtual void OnCancelClick( wxCommandEvent& event );
	
	CameraDeviceV4L2* m_Device;
	CameraDeviceV4L2::Resolution m_CurCamResolution;
};
