
package defaultnamespace.jaxws;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlType;

/**
 * This class was generated by Apache CXF 3.5.1
 * Thu Mar 17 13:14:49 CET 2022
 * Generated source version: 3.5.1
 */

@XmlRootElement(name = "c2fResponse", namespace = "http://default_package/")
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "c2fResponse", namespace = "http://default_package/")

public class C2fResponse {

    @XmlElement(name = "return")
    private double _return;

    public double getReturn() {
        return this._return;
    }

    public void setReturn(double new_return)  {
        this._return = new_return;
    }

}

