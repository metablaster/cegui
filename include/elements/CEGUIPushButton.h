/************************************************************************
	filename: 	CEGUIPushButton.h
	created:	13/4/2004
	author:		Paul D Turner
	
	purpose:	Interface to base class for PushButton widget
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://crayzedsgui.sourceforge.net)
    Copyright (C)2004 Paul D Turner (crayzed@users.sourceforge.net)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#ifndef _CEGUIPushButton_h_
#define _CEGUIPushButton_h_

#include "CEGUIBase.h"
#include "elements/CEGUIButtonBase.h"

// Start of CEGUI namespace section
namespace CEGUI
{
/*!
\brief

*/
class CEGUIBASE_API PushButton : public ButtonBase
{
public:
	/*************************************************************************
		Event name constants
	*************************************************************************/
	// generated internally by Window
	static const utf8	Clicked[];					//!< The button was clicked.

protected:
	/*************************************************************************
		Construction and Destruction
	*************************************************************************/
	/*!
	\brief
		Constructor for base PushButton class
	*/
	PushButton(const String& type, const String& name);


	/*!
	\brief
		Destructor for PushButton class
	*/
	virtual ~PushButton(void);


	/*************************************************************************
		New Event Handlers
	*************************************************************************/
	/*!
	\brief
		handler invoked internally when the button is clicked.
	*/
	virtual void	onClicked(EventArgs& e);


	/*************************************************************************
		Overridden Event Handlers
	*************************************************************************/
	virtual void	onMouseButtonUp(MouseEventArgs& e);


	/*************************************************************************
		Implementation Functions
	*************************************************************************/
	/*!
	\brief
		Add button specific events
	*/
	void	addPushButtonEvents(void);
};


} // End of  CEGUI namespace section


#endif	// end of guard _CEGUIPushButton_h_
