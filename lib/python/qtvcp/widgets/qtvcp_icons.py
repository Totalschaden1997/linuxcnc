import os

class Icon:
    def __init__(self):
        self.ICONDIR = os.path.join(os.path.abspath(os.path.dirname(__file__)),'widget_icons')
        self.LCNC_ICON = os.path.join(self.ICONDIR,'linuxcnc-wizard.gif')
        if not os.path.isfile(self.LCNC_ICON):
            print 'error no icon in: ',self.LCNC_ICON

    def get_path(self,widgetname):
        for i in ('.png','.gif','error'):
            path = os.path.join(self.ICONDIR,widgetname+i)
            if os.path.isfile(path):
                return path
            elif i == 'error':
                #print 'QTVCP WARNING: Missing icon for ',widgetname,' widget'
                return self.LCNC_ICON 